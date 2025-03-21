#include "stack.h"
#include "linked.h"

// void Create_Node(address *p) {
//     Create_Node(p);
// }

void Push(address *p, address pNew) {
    Ins_Awal(p, pNew);
}

void Pop(address *p, infotype *X) {
    Del_Awal(p, X);
}
