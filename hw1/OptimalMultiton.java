import java.util.Scanner;
import java.lang.String;
public class OptimalMultiton
{
		public static void main(String[] args)
		{
				String str, instruction;
				int i, num, oriMulNum, j, len, flag;
				long numBig = 0;
				Scanner scan = new Scanner(System.in);
				while(true) {

						System.out.println("Enter the number followed by the order:");
						str = scan.next();
						num = scan.nextInt();
						len = str.length();

						StringBuilder ansStr = new StringBuilder();

						if(len - 1 < num) {System.out.println("Error number, please input again."); continue;}
						numBig = FindMulBig(len, str, num, ansStr);
						System.out.println("Maximum product:" + numBig + " = " +ansStr);
						
						System.out.println("Continue or not?");	
						System.out.println("Y or N");

						instruction = scan.next();
						flag = instruction.compareTo("Y");
						if(flag == 0) continue;
						else break;

				}
		}

		public static long FindMulBig(int start, String str, int numMul, StringBuilder ansStr)
		{
				String str2, str3;
				StringBuilder tmpAnsStr = new StringBuilder();
				int i, j;
				long big = 0, tmpBig;

				if(numMul != 0)
				{
						for(i = start - 1; i > 0; i--) {
								str2 = str.substring(0, i);
								str3 = str.substring(i, str.length());
								tmpBig = Long.parseLong(str2) * Long.parseLong(str3);

								if(numMul != 1)
								{
										tmpAnsStr.setLength(0);
										tmpBig = FindMulBig(str2.length(), str2, numMul - 1, tmpAnsStr) * Long.parseLong(str3);

										if(big < tmpBig)
										{
												ansStr.setLength(0);
												ansStr.append(tmpAnsStr);
												ansStr.append(" * ");
												ansStr.append(str3);

												big = tmpBig;
										}

								}else{
									if(big < tmpBig)
									{
											ansStr.setLength(0);
											ansStr.append(str2);
											ansStr.append(" * ");
											ansStr.append(str3);

											big = tmpBig;
									}

								}
						}
				}
				return big;
		}

}
