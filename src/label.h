#ifndef LABEL
#define LABEL

#include "term.h"
#include "list.h"
#include "system.h"

/*
 * Structure to store label information
 */
struct labelinfo
{
    Term label;
    Term protocol;
    Term sendrole;
    Term readrole;
};

typedef struct labelinfo* Labelinfo;

Labelinfo label_create (const Term label, const Protocol protocol);
void label_destroy (Labelinfo linfo);
Labelinfo label_find (List labellist, const Term label);

#endif