#include <cstddef>
#include <stdio.h>

#include "LinkedArray.h"

using namespace com::github::erixmannx;

template class LinkedArray<int>;
static LinkedArray<int>* linkedArray = NULL;

int main(int argc, char** argv) {
	printf("Hello");

	return 0;
}
