class Node{
  public:
    int content;
    Node * pastboy;//this is a pointer
    explicit Node(const int& data);
    //Node(int data, Node *next);
};

Node::Node(const int& data):content(data),pastboy(nullptr),nextboy(nullptr){}
