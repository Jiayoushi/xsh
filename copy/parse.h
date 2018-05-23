#define MAX_FILENAME_LENGTH        255
#define DEFAULT_ARGV_SIZE            8

struct process {
  struct process *next_process;     
  char **argv;
};

struct job {
  struct process *first_process;
  int total_process;
  // TODO: Redo this part for a2
  int input_redirect_mode;        // 0 for non, 1 for <, 2 for <<
  int output_redirect_mode;       
  char input_redirect_filename[MAX_FILENAME_LENGTH];
  char output_redirect_filename[MAX_FILENAME_LENGTH];
};

int parse(char *command, struct job *job);
