#ifndef PARSERUNION_H
#define PARSERUNION_H
#include "ParseTree.h"
typedef union{
    struct FuncOperand *myOperand;
	struct FuncOperator *myOperator; 
	struct TableList *myTables;
	struct ComparisonOp *myComparison;
	struct Operand *myBoolOperand;
	struct OrList *myOrList;
	struct AndList *myAndList;
	struct NameList *myNames;
	char *actualChars;
	char whichOne;
	struct SchemaAttributes *myCreateAtts;
	struct SortAttributes *mySortAtts;

} YYSTYPE;


#endif
