import java.util.Scanner;

public class Test
{
		public static void main (String[] args)
		{
				String str;
				Scanner scan = new Scanner(System.in);
				str = scan.next();
				StringBuilder ans_str = new StringBuilder(str);
				ChangStr(ans_str);
				System.out.println(ans_str);
		}

		public static void  ChangStr(StringBuilder str)
		{
				str.append("abc");
				System.out.println(str);
		}

}
