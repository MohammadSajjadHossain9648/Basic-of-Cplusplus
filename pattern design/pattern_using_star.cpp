#include <iostream>
using namespace std;

int main()
{
    /* to know more:
    https://www.tutorialstonight.com/pattern-program-in-c++#:~:text=30%20Pattern%20Program%20in%20C%2B%2B%20(Full%20Code)
    https://techstudy.org/clanguage/list-of-cplusplus-language-star-pattern-programs/
    */

    /*
    note:
    1. All half traingle pattern is like Floyd's triangle pattern whatever it is inverted or not.
    Floyd's triangle is a triangular array of natural numbers, used in computer science education.
    It is named after Robert Floyd. It is defined by filling the rows of the triangle with consecutive numbers, starting with a 1 in the top left corner:

    link: https://www.geeksforgeeks.org/cpp-program-to-print-floyds-triangle/

                                    1
                                    2	3
                                    4	5	6
                                    7	8	9	10
                                    11	12	13	14	15

    2. Full traingle pattern is like Pascal's triangle pattern whatever it is inverted or not.
    link:https://aperiodical.com/2021/12/pascals-triangle-and-its-secrets-introduction/
         https://favtutor.com/blogs/pascal-triangle-cpp
         https://www.geeksforgeeks.org/pascal-triangle/
                  1
                1   1
              1   2   1
            1   3   3   1
          1   4   6   4   1
    */

//    Pattern 1: Program to print square pyramid using *
//    * * * *
//    * * * *
//    * * * *
//    * * * *

    int r1;
    cout<<"enter row for pattern 1: "<<endl;
    cin>>r1;

    for(int i=1; i<=r1; i++) //or,write like for(int i=0; i<r1; i++)
    {
        for(int j=1; j<=r1; j++)  //change here also like for(int j=0; j<r1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    /*  can be write both way shortly

    for(int i=1;i<=r1;i++){
        int j=1;
        while(j<=r1){
            cout<<"* ";
            j++;
        }
        cout<<endl;
    }

            or,

    int i=1;  // or, int i=0; change in while condition like i<r1 and j<r1 and also int j=0;
    while(i<=r1)
    {
        int j=1;
        while(j<=r1)
        {
            cout<<"* ";
            j++;
        }

        cout<<endl;
        i++;
    }
    */



//    Pattern 2: Program to print half pyramid using *
//    *
//    * *
//    * * *
//    * * * *

    int r2;
    cout<<"enter row for pattern 2: "<<endl;
    cin>>r2;

    for(int i=1; i<=r2; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    /* how to check condition in inner loop
        for(int i=1; i<=r2; i++)	Need star	Condition check position (i>=j)
                1                 	*	            1>=1
                2	       	        **	            2>=1,2
                3	                ***        	    3>=1,2,3
                4	                ****	        4>=1,2,3,4
    */



//    Pattern 3:Inverted half pyramid using *
//
//    * * * *
//    * * *
//    * *
//    *

    int r3;
    cout<<"enter row for pattern 3: "<<endl;
    cin>>r3;

    for(int i=1; i<=r3; i++)
    {
        for(int j=i; j<=r3; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    //or,
    //    int r3;
    //    cout<<"enter row for pattern 3: "<<endl;
    //    cin>>r3;
    //
    //    for(int i=r3; i>=1; i--)
    //    {
    //        for(int j=1; j<=i; j++)
    //        {
    //            cout<<"* ";
    //        }
    //        cout<<endl;
    //    }

    //    or,
    //    int r3;
    //    cout<<"enter row for pattern 3: "<<endl;
    //    cin>>r3;
    //
    //    for(int i=1; i<=r3; i++)
    //    {
    //        for(int j=r3; j>=i; j--)
    //        {
    //            cout<<"* ";
    //        }
    //        cout<<endl;
    //    }

    //  or, always think this way

    //    int r3;
    //    cout<<"enter row for pattern 3: "<<endl;
    //    cin>>r3;
    //
    //    int l=r3;
    //    for(int i=1; i<=r3; i++)
    //    {
    //        for(int j=1; j<=r3; j++)
    //        {
    //            if(l>=j)
    //            {
    //                cout<<"* ";
    //            }
    //        }
    //        l--;
    //        cout<<endl;
    //    }


    /* how to check condition in inner loop
        for(int i=r3; i>=1; i--)	Need star	Condition check position for(int j=1; j<=i; j++)
                4                      	****	    4>=1,2,3,4
                3	               	     ***	    3>=1,2,3
                2	               	      **	    2>=1,2
                1	               	       *	    1>=1
    */



//    Pattern 4: Program to print half pyramid using *
//          *
//        * *
//      * * *
//    * * * *

    int r4;
    cout<<"enter row for pattern 4: "<<endl;
    cin>>r4;

    for(int i=1; i<=r4; i++)
    {
        for(int j=i; j<r4; j++) // first check space, which is in 1 2 3 position in 1st iteration.
        {
            cout<<"  ";
        }
        for(int k=1; k<=i; k++) //check number of star to print each row
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    //    int r4;
    //    cout<<"enter row for pattern 4: "<<endl;
    //    cin>>r4;
    //
    //    for(int i=r4; i>=1; i--)
    //    {
    //        for(int j=1; j<i; j++) // first check space, which is in 1 2 3 position.
    //        {
    //            cout<<"  ";
    //        }
    //        for(int k=r4; k>=i; k--)
    //        {
    //            cout<<"* ";
    //        }
    //        cout<<endl;
    //    }

    /* how to check condition in inner loop
        for(int i=r4; i>=1; i--)	Need star	Condition check position for spaces(j<i)   Condition check position for star(k>=i)
                4                     	   *	    1,2,3<4                                           4>=4
                3	                      **	    1,2<3                                           3,4>=3
                2	                     ***	    1<2                                           2,3,4>=2
                1	                    ****	    '\0'<1                                      1,2,3,4>=1
    */

    //    int r4;
    //    cout<<"enter row for pattern 4: "<<endl;
    //    cin>>r4;
    //
    //    for(int i=r4; i>=1; i--)
    //    {
    //        for(int j=1; j<=r4; j++)
    //        {
    //            if(i>j)    // in first line iteration check 4>1,2,3 print nothing only print * in 4th position in 1st row.
    //            {
    //                cout<<" ";
    //            }
    //            else
    //            {
    //                cout<<"*";
    //            }
    //        }
    //        cout<<endl;
    //    }

    //  or, always think this way
    //    int r4;
    //    cout<<"enter row for pattern 4: "<<endl;
    //    cin>>r4;
    //
    //    int l=r4;
    //    for(int i=1; i<=r4; i++)
    //    {
    //        for(int j=1; j<=r4; j++)
    //        {
    //            if(l<=j)    // in first line iteration check 4<=4 , so only print * in 4th position in 1st row.
    //            {
    //                cout<<"*";
    //            }
    //            else
    //            {
    //                cout<<" ";
    //            }
    //        }
    //        cout<<endl;
    //        l--; // decrement for left site design
    //    }

    /* how to check condition in inner loop
        for(int i=r4; i>=1; i--)	Need star	Condition check position for(int k=r4; k>=i; k--)
                4                     	   *	    4>=4
                3	                      **	    3,4>=3
                2	                     ***	    2,3,4>=2
                1	                    ****	    1,2,3,4>=1
    */



//    Pattern 5: Program to print half pyramid using *
//    * * * *
//      * * *
//        * *
//          *

    int r5;
    cout<<"enter row for pattern 5: "<<endl;
    cin>>r5;

    for(int i=1; i<=r5; i++)
    {
        for(int j=1; j<i; j++)
        {
            cout<<"  ";
        }
        for(int k=i; k<=r5; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    /* how to check condition in inner loop
    for(int i=1; i<=r5; i++)	Need star	Condition check position for spaces(j<i)   Condition check position for star (k=i)
                1                 ****	        '\0'<1                                 1,2,3,4>=1
                2	               ***	           1<2                                 2,3,4>=2
                3	                **	         1,2<3                                 3,4>=3
                4	                 *	       1,2,3<4                                 4>=4
    */

    //    int r5;
    //    cout<<"enter row for pattern 5: "<<endl;
    //    cin>>r5;
    //
    //    for(int i=1; i<=r5; i++)
    //    {
    //        for(int j=1; j<=r5; j++)
    //        {
    //            if(i<=j)  // in first line iteration check 1<=1,2,3,4 print *.
    //            {
    //                cout<<"* ";
    //            }
    //            else
    //            {
    //                cout<<"  ";
    //            }
    //        }
    //        cout<<endl;
    //    }

    /* how to check condition in inner loop
        for(int i=1; i<=r5; i++)	Need star	Condition check(i<=j)
                1                    	****	    1<=1,2,3,4
                2	         	         ***	    2<=2,3,4
                3	          	          **	    3<=3,4
                4	           	           *	    4<=4
    */



    //    Pattern 8: Program to print Pascal’s Triangle pattern using *
//            *
//           * *
//          * * *
//         * * * *
//        * * * * *

    int r8;
    cout<<"enter row for pattern 8: "<<endl;
    cin>>r8;

    for(int i=1; i<=r8; i++)
    {
        for(int j=i; j<r8; j++) //for space print
        {
            cout<<" ";
        }
        for(int k=1; k<=i; k++)  // for star print
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    //    int r8;
    //    cout<<"enter row for pattern 8: "<<endl;
    //    cin>>r8;
    //
    //    for(int i=1; i<=r8; i++)
    //    {
    //        for(int j=r8; j>=1; j--)
    //        {
    //            if(i>=j) //always check number of star in a row and print i number of star each time
    //            {
    //                cout<<"* ";
    //            }
    //            cout<<"  ";
    //        }
    //        cout<<endl;
    //    }

    //    or,
    //    for(int i=r8; i>=1; i--)
    //    {
    //        for(int j=1; j<=r8; j++)
    //        {
    //            if(i<=j)    // in first line iteration check 5<=5 print only * which is in middle.
    //            {
    //                cout<<"* ";
    //            }
    //            cout<<"  ";
    //        }
    //        cout<<endl;
    //    }


//    Pattern 9: Program to print inverted Pascal’s Triangle pattern using *
//        * * * * *
//         * * * *
//          * * *
//           * *
//            *
    int r9;
    cout<<"enter row for pattern 9: "<<endl;
    cin>>r9;

    for(int i=1; i<=r9; i++)
    {
        for(int j=1; j<i; j++)
        {
            cout<<" ";
        }
        for(int k=i; k<=r9; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    //    or
    //    int r9;
    //    cout<<"enter row for pattern 9: "<<endl;
    //    cin>>r9;
    //
    //    for(int i=r9; i>=1; i--)
    //    {
    //        for(int j=1; j<=r9; j++)
    //        {
    //            if(i>=j)    // in first line iteration check 1<=1,2,3,4,5 print nothing only print * in 1st row.
    //            {
    //                cout<<"*";
    //            }
    //            cout<<"  ";
    //        }
    //        cout<<endl;
    //    }

    //    or,
    //    for(int i=1; i<=r9; i++)
    //    {
    //        for(int j=1; j<=r9; j++)
    //        {
    //            if(i<=j)    // in first line iteration check 1<=1,2,3,4,5 print nothing only print * in 1st row.
    //            {
    //                cout<<"* ";
    //            }
    //            cout<<"  ";
    //        }
    //        cout<<endl;
    //    }




//    Pattern 6: Program to print full pyramid using *
//          *
//        * * *
//      * * * * *
//    * * * * * * *
//  * * * * * * * * *

    int r6;
    cout<<"enter row for pattern 6: "<<endl;
    cin>>r6;

    for(int i=1; i<=r6; i++)
    {
        for(int j=i; j<r6; j++) //it count left side space, in 1st iteration, there are 4 spaces.
        {
            cout<<"  ";
        }
        for(int k=1; k<2*i; k++) //in 1st iteration, there are one star.
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    //or
    //    int r6;
    //    cout<<"enter row for pattern 6: "<<endl;
    //    cin>>r6;
    //
    //    int l=r6; //left site design where l=5
    //    int r=r6; //right site design where r=5
    //
    //    for (int i=1; i<=r6; i++)
    //    {
    //        for(int j=1; j<=r6-1; j++) //if r6=5, it present left site pattern design before 5 and show 1 to 4
    //        {
    //            if(l<=j) // first iteration (5<=4) is not true so no * print
    //            {
    //                cout<<"*";
    //            }
    //            else
    //            {
    //                cout<<" ";
    //            }
    //        }
    //        l--; //decrement it for left site pattern
    //
    //        cout<<"*"; //here, middle point always have a star
    //
    //        for(int k=r6+1; k<=r6*2-1; k++) //if r6=5, it present right site pattern design after 5 and show 6 to 9
    //        {
    //            if(r>=k) // first iteration (5>=6) is not true so no * print
    //            {
    //                cout<<"*";
    //            }
    //            else
    //            {
    //                cout<<" ";
    //            }
    //        }
    //        r++; //increment it for right site pattern
    //        cout<<endl;
    //    }

    //    or,using while loop
    //    int l=r6;
    //    int r=r6;
    //    int i=1;
    //    while(i<=r6)
    //    {
    //        for(int j=1; j<=r6-1; j++) //if r6=5, it present left site pattern design before 5 and show 1 to 4
    //        {
    //            if(l<=j) // first iteration (5<=4) is not true so no * print
    //            {
    //                cout<<"*";
    //            }
    //            else
    //            {
    //                cout<<" ";
    //            }
    //        }
    //        l--; //decrement it for left site pattern
    //
    //        cout<<"*"; //here, middle point always have a star
    //
    //        for(int k=r6+1; k<=r6*2-1; k++) //if r6=5, it present right site pattern design after 5 and show 6 to 9
    //        {
    //            if(r>=k) // first iteration (5>=6) is not true so no * print
    //            {
    //                cout<<"*";
    //            }
    //            else
    //            {
    //                cout<<" ";
    //            }
    //        }
    //        r++;
    //        cout<<endl;
    //        i++;
    //    }

    /* how to check condition for full pyramid
              *
            * * *
          * * * * *
        * * * * * * *
      * * * * * * * * *
     1. first convert three site.left side, middle one column and right side.
      if input row is 5 (cin>>r6;), left side is (1 to 4), middle is 5 and right side is (6 to 9)
     2. now we make an pattern design for left side first

     see the pattern:

              *
            * *
          * * *
        * * * *

        how to check condition in left inner loop
        for(int j=1; j<=r6; j++)   l=r6	   Need star	Condition check position (l<=j)
                1                   5                       5<=4/'\0'
                2                  	4       	   *	    4<=4
                3	                3	          **	    3<=3,4
                4	                2	         ***	    2<=2,3,4
                5	                1	        ****	    1<=1,2,3,4

     3. middle one column always have a star
     4. rest we make an pattern design for right side first

     see the patern:

        *
        * *
        * * *
        * * * *

        how to check condition in right inner loop
        for(int k=r6+1; k<=r6*2-1; k++)   r=r6	   Need star	Condition check position(r>=k)
                6                           5                        5>=6/'\0'
                7                  	        6       *	             6>=6
                8	                        7	    **	             7>=6,7
                9	                        8	    ***	             8>=6,7,8
                10	                        9	    ****	         9>=6,7,8,9
    */



//    Pattern 7: Program to print full pyramid using *
//  * * * * * * * * *
//    * * * * * * *
//      * * * * *
//        * * *
//          *


    int r7;
    cout<<"enter row for pattern 7: "<<endl;
    cin>>r7;

    for(int i=1; i<=r7; i++)
    {
        for(int j=1; j<i; j++) //it count left side space, in 1st iteration, there are no spaces by use j>i.
        {
            cout<<"  ";
        }
        for(int k=i; k<=2*r7-i; k++) //in 1st iteration, there are all star.
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    //    or,
    //    int r7;
    //    cout<<"enter row for pattern 7: "<<endl;
    //    cin>>r7;
    //
    //    for(int i=r7; i>=1; i--)
    //    {
    //        for(int j=r7; j>i; j--) //it count left side space, in 1st iteration, there are no spaces by use j>i.
    //        {
    //            cout<<"  ";
    //        }
    //        for(int k=1; k<2*i; k++) //in 1st iteration, there are all star.
    //        {
    //            cout<<" *";
    //        }
    //        cout<<endl;
    //    }

    //    or
    //    int r7;
    //    cout<<"enter row for pattern 7: "<<endl;
    //    cin>>r7;
    //
    //    int r=r7*2-1; //right site design where r=5
    //    for(int i=1; i<=r7; i++)
    //    {
    //        for(int j=1; j<=r7-1; j++) //if r7=5, it present left site pattern design before 5 and show 1 to 4
    //        {
    //            if(i<=j)  // first iteration (1<=1,2,3) which is true so * print
    //            {
    //                cout<<"*";
    //            }
    //            else
    //            {
    //                cout<<" ";
    //            }
    //        }
    //
    //        cout<<"*"; //here, middle point always have a star
    //
    //        for(int k=r7+1; k<=r7*2-1; k++) //if r7=5, it present right site pattern design after 5 and show 6 to 9
    //        {
    //            if(r>=k)   // first iteration (9>=9,8,7,6) which is true so * print
    //            {
    //                cout<<"*";
    //            }
    //            else
    //            {
    //                cout<<" ";
    //            }
    //        }
    //        r--; //decrement it for right site pattern
    //        cout<<endl;
    //    }

    //    or, using while loop
    //    int i=1;
    //    int r=r7*2-1;
    //    while(i<=r7)
    //    {
    //        for(int j=1; j<r7; j++)
    //        {
    //            if(i<=j)
    //            {
    //                cout<<"*";
    //            }
    //            else
    //            {
    //                cout<<" ";
    //            }
    //        }
    //        cout<<"*";
    //
    //        for(int k=r7+1; k<=r7*2-1; k++)
    //        {
    //            if(r>=k)
    //            {
    //                cout<<"*";
    //            }
    //            else
    //            {
    //                cout<<" ";
    //            }
    //        }
    //        r--;
    //        cout<<endl;
    //        i++;
    //    }

    /* how to check condition for inverted full pyramid
        * * * * * * * * *
          * * * * * * *
            * * * * *
              * * *
                *
     1. first convert three site.left side, middle one column and right side.
      if input row is 5 (cin>>r7;), left side is (1 to 4), middle is 5 and right side is (6 to 9)
     2. now we make an pattern design for left side first

     see the pattern:
        * * * *
          * * *
            * *
              *

        how to check condition in left inner loop
        for(int j=1; j<=r7; j++)	   Need star	Condition check position(i<=j)
                1                          ****           1<=1,2,3,4
                2                  	     	***           2<=2,3,4
                3	              	       	 **           3<=3,4
                4	                          *           4<=4
                5	                       	              5<='\0'

     3. middle one column always have a star
     4. rest we make an pattern design for right side first

     see the patern:
        * * * *
        * * *
        * *
        *


        how to check condition in right inner loop
        for(int k=r6+1; k<=r7*2-1; k++)  r=r7*2-1  Need star	Condition check position(r>=k)
                6                           9        ****           9<=6,7,8,9
                7                  	        8        ***            8<=6,7,8
                8	                        7	     **	            7<=6,7
                9	                        6	     *              6>=6
                10	                        5	    	            5>=6/'\0'
    */




//    Pattern 10: Program to print full pyramid using *
//          *
//        * * *
//      * * * * *
//    * * * * * * *
//  * * * * * * * * *
//    * * * * * * *
//      * * * * *
//        * * *
//          *

    int r10;
    cout<<"enter row for pattern 10: "<<endl;
    cin>>r10;

    for(int i=1; i<=r10; i++) //first upper half of pyramid (1 to r10)
    {
        for(int j=i; j<r10; j++)
        {
            cout<<"  ";
        }
        for(int k=1; k<2*i; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    int new_row=r10-1;
    for(int i=1; i<=new_row; i++) //last half of pyramid
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"  ";
        }
        for(int k=i; k<=2*new_row-i; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    //or
    //    int r10;
    //    cout<<"enter row for pattern 10: "<<endl;
    //    cin>>r10;
    //
    //    for(int i=1; i<=r10; i++) //first upper half of pyramid (1 to r10)
    //    {
    //        for(int j=i; j<r10; j++)
    //        {
    //            cout<<"  ";
    //        }
    //        for(int k=1; k<2*i; k++)
    //        {
    //            cout<<" *";
    //        }
    //        cout<<endl;
    //    }
    //    for(int i=r10-1; i>=1; i--) //last half of pyramid (r10+1 to r10*2-1)
    //    {
    //        for(int j=r10-1; j>=i; j--)
    //        {
    //            cout<<"  ";
    //        }
    //        for(int k=1; k<2*i; k++)
    //        {
    //            cout<<" *";
    //        }
    //        cout<<endl;
    //    }



//    Pattern 11: Program to print pattern using *
//        *
//        **
//        ***
//        ****
//        *****
//        ****
//        ***
//        **
//        *

    int r11;
    cout<<"enter row for pattern 11: "<<endl;
    cin>>r11;

    for(int i=1; i<=r11; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=r11-1; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }



//    Pattern 12: Program to print pattern using *
//        * * * * *
//          * * * * *
//            * * * * *
//              * * * * *
//                * * * * *

    int r12;
    cout<<"enter row for pattern 12: "<<endl;
    cin>>r12;

    for(int i=r12; i>=1; i--)
    {
        for(int j=i; j<r12; j++)
        {
            cout<<"  ";
        }
        for(int k=1; k<=r12; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }



//    Pattern 13: Program to print pattern using *
//              * * * * *
//            * * * * *
//          * * * * *
//        * * * * *
//      * * * * *

    int r13;
    cout<<"enter row for pattern 13: "<<endl;
    cin>>r13;

    for(int i=r13; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"  ";
        }
        for(int k=1; k<=r13; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}
