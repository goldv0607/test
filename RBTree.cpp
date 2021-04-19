#include<iostream>
using namespace std;
//红黑树的构造与关联型容器库的实现
//红黑树和AVL树的区别
//2-3树与B+树
//包括map、set、multimap、multiset

template <class T>
class RBTNode
{
  RBTColor color; //颜色
  T key; //关键字(键值)
  RBTNode *left; //左孩子
  RBTNode *right; //右孩子
  RBTNode *parent; //父结点
  
  RBTNode(T value, RBTColor c,  RBTNode *p, RBTNode *l, RBTNode *r):key(value), color(c), parent(), left(l), right(r){}
 }

template <class T>
class RBTree
{
  private:
     RBTNode<T> *mRoot; //根节点
  public:
    RBTree();
    ~RBTree();
  //前序遍历红黑树
  //中序遍历红黑树
  //后序遍历红黑树
  //递归实现查找红黑树中键值为key的节点
  //非递归实现查找红黑树中键值为key的节点
  //查找最小结点：返回最小结点的键值
  //查找最大结点：返回最大结点的键值
  //找结点的后继结点。即，查找红黑树中数据值大于该结点的最小结点。
  //找结点的前驱结点。即，查找红黑树中数据值小于该结点额最大结点。
  //将结点(key为节点键值)插入红黑树中
  //删除结点(key为节点键值)
  //销毁红黑树
  //打印红黑树
  //前序遍历红黑树
  //中序遍历红黑树
  //后序遍历红黑树
  //递归实现查找红黑树x中键值为key的节点
  //非递归实现查找红黑树x中键值为key的节点
  //查找最小结点:返回tree为根结点的红黑树的最小结点
  //查找最大结点：返回tree为根结点的红黑树的最大结点
  //左旋
  //右旋
  //插入函数
  //插入修正函数
  //删除函数
  //删除修正函数
  //销毁红黑树
  //打印红黑树
  
  
    

int main()
{
  return 0;
}
