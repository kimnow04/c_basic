#include <stdio.h>

#define MAX_STACK_SIZE 100

// push data to stack
// data to update : stack, size, top_index
void push( int new_data, int stack[], int *top_index, int *cur_size )
{
	// check that stack is full
	if ( *cur_size >= 100 )
	{
		printf( "Stack is full\n" );
		return;
	}

	// push data to stack
	// TODO
	
	*cur_size += 1;
	*top_index += 1;
	stack[*top_index] = new_data;
}


// pop data from stack
// data to update : stack, size, top_index
void pop( int stack[], int *top_index, int *cur_size )
{
	// check that stack is empty
	if ( *cur_size < 0 )
	{
		printf( "Stack is empty\n" );
		return;
	}

	// pop data from stack
	// TODO
	*cur_size -= 1;
	*top_index -= 1;
}

// return top data
// data to update : none
int top( int stack[], int top_index, int cur_size )
{
	if ( cur_size < 0 )
	{
		printf( "Stack is empty\n" );
		return 0;
	}

	// TODO
	return stack[top_index];
}

// print stack
// data to update : none
void print_stack( int stack[], int cur_size )
{
	printf( "----stack----\n" );
	// check that stack is empty
	if ( cur_size < 0 )
	{
		printf( "Stack is empty\n" );
		printf( "-------------\n" );
		return;
	}
	// print all stack data
	// ex )
	// ----stack----
	// 1 <- top
	// 3
	// 4
	// 5
	// -------------
	// TODO
	for(int i = cur_size - 1; i >= 0; i--)
		printf("%d\n", stack[i]); 
	printf( "-------------\n" );
}

int main( void )
{
	int stack[MAX_STACK_SIZE];
	int top_index = -1;
	int cur_size = 0;

	while ( 1 )
	{
		int select;
		printf( "\n0. quit\n" );
		printf( "1. push\n" );
		printf( "2. pop\n" );
		printf( "3. print top\n" );
		printf( "4. print size\n" );
		printf( "5. print stack\n" );
		printf( " > " );
		scanf( "%d", &select );
		switch( select )
		{
			case 0: // quit
				return 0;
			case 1: // push
			{
				int new_data;
				printf( "input new data : " );
				scanf( "%d", &new_data );
				push( new_data, stack, &top_index, &cur_size );
				print_stack( stack, cur_size );
				break;
			}
			case 2: // pop
			{
				pop( stack, &top_index, &cur_size );
				print_stack( stack, cur_size );
				break;
			}
			case 3: // print top
			{
				printf( "Top : %d\n", top( stack, top_index, cur_size ) );
				break;
			}
			case 4: // print current stack size
			{
				printf( "Current size : %d\n", cur_size );
				break;
			}
			case 5: // print stack
			{
				print_stack( stack, cur_size );
				break;
			}
			default :
			{
				printf( "Wrong input!\n" );
				break;
			}
		}
	}

	return 0;
}
