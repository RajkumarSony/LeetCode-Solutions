
#implement pow() function.
"""
We should implement pow, right?
What happens when you do a number to the power of sth?
It's two cases, the power is either positive, zero, or negative.
If it's zero, the result is 1 regardless. Right?
If it's positive, you multiply your number the power times, and if it's negative, you (let's say your number is x) multiply 1/x the power times.
That's exactly what we're going to do.
The code has two parts, main function (myPow) and helper, both accepting the same input variabes.
Let's focus on the first function, myPow.

It's doing the above.
If the is >= 0, call the helper function with x and n as input (line #1).
Otherwise, call the inverse of it with x and -n as input (line #2).
For the last case, imagine you want to do 2^(-3).
How will you do it normally? 1/(2^3), right? 
That's all.

"""

# First part
def myPow(x, n):
    if n >= 0:
        return self.helper(x, n) #1
    else:
        return 1/self.helper(x, -n) #2


# Second part
def helper(x, n): 
    if n == 0: #3
        return 1
    
    temp = self.myPow(x, n//2) #4
        
    if int(n%2) == 0: #5
        return  temp * temp
    else:
        return temp * temp * x #6

"""

Now, let's focus on the second part.
Line #3 takes care of the base case when n is zero.
Then we calculate the temp for the case that n = n/2.
This way, we break down the problem into two problems,
 each with the same solution.
So, we just need to calculate it once.
If n is divisible by 2, then we multiply temp by itself (line #5) and if it's not, we multiply the product by an additional x (line #6).

"""