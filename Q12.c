#include <stdio.h>
typedef struct {
	float operand1, operand2;
	char op;
} bexpression;
float compute2(bexpression *expr);
int main20()
{
	bexpression e;
	printf("Enter expression (op1 op2 op) : ");
	scanf("%f %f %c", &e.operand1, &e.operand2, &e.op);
	printf("compute2(): %f\n", compute2(&e));
	return 0;
}
float compute2(bexpression *expr) {
	if (expr->op == '+') {
		return expr->operand1 + expr->operand2;
	}
	else if (expr->op == '-') {
		return expr->operand1 + expr->operand2;
	}
	else if (expr->op == '*') {
		return expr->operand1 * expr->operand2;
	}
	else if (expr->op == '/') {
		return expr->operand1 / expr->operand2;
	}
	else return 0;
}
/* write your code here */