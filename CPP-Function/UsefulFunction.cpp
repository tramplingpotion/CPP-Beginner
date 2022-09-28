
//get array size function
//not understand why if using the formula through function the output is different to just using it in variable.
int getArraySize(int arrayVar[])
{
    int arraySize = sizeof(arrayVar) / sizeof(int);
    return arraySize;
}