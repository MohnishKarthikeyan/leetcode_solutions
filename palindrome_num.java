public class palindrome_num
{
  public boolean isPalindrome(int x) 
  {
      int rev = 0;
      int rem;
      int num = x;
      if(x>=0)
      {
          while(num!=0)
          {
              rem = num%10;
              rev = rev*10 + rem;
              num/=10;
          }
          if(x==rev)
          {
              return true;
          }
          else
          {
              return false;
          }
      }
      else
      {
          return false;
      }
  }
}
