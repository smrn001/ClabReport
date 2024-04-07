#include <stdio.h>
union student
{
int roll;;
float marks;
} ;

int main()
{
union student st;
st.roll=60;
printf("\n Roll=%d",st.roll);
st.marks=55.5;
printf("\n Marks=%f",st.marks);
return 0;
}