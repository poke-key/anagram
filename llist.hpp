
using namespace std;

#define MALE 0
#define FEMALE 1

struct Person {
    string first_name;
    string last_name;
    int age;
    int gender; //male = 0, female = 1
    struct Person *nptr;
};

void add(struct Person **head, struct Person *node);
void remove(struct Person **head, struct Person *node) ;
void insert(struct Person *afternode, struct Person *node);
void print(struct Person **head);
struct Person *find(struct Person *head, string first_name, string last_name);