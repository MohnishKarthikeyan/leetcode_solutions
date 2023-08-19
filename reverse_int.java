public class reverse_int 
{
  public int reverse(int x) 
    {
        int num = x;
        long rev = 0;
        while(num!=0)
        {
            int rem = num%10;
            rev = rev*10 + rem;
            num/=10;
        }
        if(rev>Math.pow(-2,31) && rev<(Math.pow(2,31)-1))
        {
            int n = (int)rev;
            return n;
        }
        else
        {
            return 0;
        }
    }
}
