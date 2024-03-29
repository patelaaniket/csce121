#ifndef NODE_H
#define NODE_H

//////////////////////////////////////////////////////////////////////////////
//                         class template definition                        //
//////////////////////////////////////////////////////////////////////////////
template<typename T>
struct Node {
     // need to define this
    T data;
    Node* next;
    Node* prev;
	Node(T data) : data(data), next(nullptr), prev(nullptr) {}
};

//////////////////////////////////////////////////////////////////////////////
//                       helper function declarations                       //
//////////////////////////////////////////////////////////////////////////////
template<typename T> bool operator==(const Node<T>& rhs, const Node<T>& lhs);
template<typename T> bool operator!=(const Node<T>& rhs, const Node<T>& lhs);
template<typename T> bool operator<(const Node<T>& rhs, const Node<T>& lhs);
template<typename T> bool operator<=(const Node<T>& rhs, const Node<T>& lhs);
template<typename T> bool operator>(const Node<T>& rhs, const Node<T>& lhs);
template<typename T> bool operator>=(const Node<T>& rhs, const Node<T>& lhs);

//////////////////////////////////////////////////////////////////////////////
//                     member template function definitions                 //
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
//                     helper template function definitions                 //
//////////////////////////////////////////////////////////////////////////////
template<typename T>
bool operator==(const Node<T>& rhs, const Node<T>& lhs) {
	return (rhs.data == lhs.data);
}

template<typename T> 
bool operator!=(const Node<T>& rhs, const Node<T>& lhs) {
	return (rhs.data != lhs.data);
}

template<typename T> 
bool operator<(const Node<T>& rhs, const Node<T>& lhs) {
	return (lhs.data < rhs.data);
}

template<typename T> 
bool operator<=(const Node<T>& rhs, const Node<T>& lhs) {
	return (lhs.data < rhs.data || lhs.data == rhs.data);
}

template<typename T> 
bool operator>(const Node<T>& rhs, const Node<T>& lhs) {
	return (lhs.data > rhs.data);
}

template<typename T> 
bool operator>=(const Node<T>& rhs, const Node<T>& lhs) {
	return (lhs.data > rhs.data || lhs.data == rhs.data);
}

#endif