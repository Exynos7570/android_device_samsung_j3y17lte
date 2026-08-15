#ifndef INIT_SEC_H
#define INIT_SEC_H

#include <string.h>

#define TOTAL_VARIANTS 1 //Total number of variants

typedef struct {
    std::string model;
    std::string codename;
} variant;

static const variant G610F_model = {
    .model = "SM-J330F",
    .codename = "j3y17lte"
};


static const variant *all_variants[TOTAL_VARIANTS] = {
    &G610F_model
};

#endif // INIT_SEC_H
