#include <time.h>

struct Task {
    int plot_i;
    int plot_j;
    int gardener_id;
    int working_time;
    int status;
};

struct FieldSize {
    int rows;
    int columns;
};

enum event_type { MAP, ACTION, META_INFO };

struct Event {
    char timestamp[26];
    char buffer[1024];
    enum event_type type;
};

#define BUFFER_SIZE 256

int createClientSocket(char *server_ip, int server_port);
void sendHandleRequest(int client_socket, struct Task task);
