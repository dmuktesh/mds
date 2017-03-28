struct Qnode
{
  int data;
  struct Qnode* next;
};
struct Qnode* newNode(int data)
{
  struct Qnode* new_node = (struct Qnode*)malloc(sizeof(struct Qnode));
  new_node->data = data;
  new_node->next = NULL;
  return new_node;
}
struct Queue
{
  struct Qnode *front, *rear;
};

struct Queue* createQueue()
{
  struct Queue * new_queue = (struct Queue*)malloc(sizeof(struct Queue));
  new_queue->front = NULL;
  new_queue->rear = NULL;
  return new_queue;
}
void enqueue(struct Queue* queue, int data)
{
  struct Qnode* current_rear = queue->rear;
  struct Qnode* new_node = newNode(data);
  if(current_rear==NULL)
  {
    queue->rear = queue->front = new_node;
    return;
  }
  current_rear->next = current_front;
  queue->rear = new_node;
}
