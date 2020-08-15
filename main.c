#include <stdio.h>
#include <stdlib.h>
#include "menu/menu.h"
#include "src/avltree.h"

#define clear() printf("\033[H\033[J")

const char *menu[] = {
		" 1. Insert a new node.",
		" 2. Delete a node.",
		" 3. Find node by value.",
		" 4. Find the smallest node value.",
		" 5. Find the largest node value.",
		" 6. Pre-order traversal.",
		" 7. Post-order traversal.",
		" 8. In-order traversal.",
		" 9. Count nodes.",
		"10. Count internal nodes.",
		"11. Count external nodes.",
		"12. Tree height.",
		"13. Print tree root node.",
		"14. Delete tree.",
		"15. Exit.",
		NULL
};

int main(void) {
	op_status = 0;
	// Tree
	struct node *tree = NULL;

	// Menu
	short opt;
	const short MINOPT = 1;
	const short MAXOPT = get_menu_length(menu);
	clear();
	display_menu(menu);
	opt = select_option(MINOPT, MAXOPT);

	while (1) {
		printf("You have selected: %d\n", opt);
		switch (opt) {
			case 1:
				clear();
				puts("Inserting a node.");
				break;

			case 2:
				clear();
				puts("Deleting a node.");
				break;

			case 3:
				clear();
				puts("Find node by value.");
				break;

			case 4:
				clear();
				puts("Find the smallest node value.");
				break;

			case 5:
				clear();
				puts("Find the largest node value.");
				break;

			case 6:
				clear();
				puts("Pre-order traversal.");
				break;

			case 7:
				clear();
				puts("Post-order traversal.");
				break;

			case 8:
				clear();
				puts("In-order traversal.");
				break;

			case 9:
				clear();
				puts("Counting tree nodes.");
				break;

			case 10:
				clear();
				puts("Counting internal nodes.");
				break;


			case 11:
				clear();
				puts("Counting external nodes.");
				break;

			case 12:
				clear();
				puts("Computing the tree height.");
				break;

			case 13:
				clear();
				puts("Displaying the root node of the tree.");
				break;

			case 14:
				clear();
				puts("Deleting a tree.");
				break;

			case 15:
				clear();
				puts("Exiting the Program.");
				return 0;
		}
		// Asking user for further actions;
		display_menu(menu);
		opt = select_option(MINOPT, MAXOPT);
	}
	return 0;
}