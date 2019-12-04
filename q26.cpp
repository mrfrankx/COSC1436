void evaluateArray(int myArray, int size)
{
	int temp=0;
	for (int index = 0; index < size; index++)
	{

			if(myArray[index] >= 100)
			{
			temp = myArray[index];
			}	
	}
	return temp;
}
