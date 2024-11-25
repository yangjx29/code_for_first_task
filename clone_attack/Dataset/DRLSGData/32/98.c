int main () {
    char str1 [(861 - 760)], str2 [101];
    int OSRw1xXv [(270 - 170)], VX2QZ8xVb [(852 - 752)];
    int e2Sjbt9P, LpcCJI;
    int YfgJbK;
    cin >> YfgJbK;
    {
        int YIgDXjKrw1 = (405 - 405);
        while (YfgJbK > YIgDXjKrw1) {
            int M3LQnDiG0 = (37 - 37), xVoLBzMjcvgn = 0;
            int dH0hfwp5 = (157 - 58);
            cin >> str1 >> str2;
            memset (OSRw1xXv, (729 - 729), sizeof (OSRw1xXv));
            memset (VX2QZ8xVb, (712 - 712), sizeof (VX2QZ8xVb));
            e2Sjbt9P = strlen (str1);
            LpcCJI = strlen (str2);
            {
                int n1yTEwOP = e2Sjbt9P - (286 - 285);
                while (0 <= n1yTEwOP) {
                    OSRw1xXv[M3LQnDiG0++] = str1[n1yTEwOP] - '0';
                    n1yTEwOP--;
                }
            }
            for (int n1yTEwOP = LpcCJI -(662 - 661);
            n1yTEwOP >= 0; n1yTEwOP--)
                VX2QZ8xVb[xVoLBzMjcvgn++] = str2[n1yTEwOP] - '0';
            {
                int n1yTEwOP = 0;
                while (100 > n1yTEwOP) {
                    OSRw1xXv[n1yTEwOP] = OSRw1xXv[n1yTEwOP] - VX2QZ8xVb[n1yTEwOP];
                    if (0 > OSRw1xXv[n1yTEwOP]) {
                        OSRw1xXv[n1yTEwOP] = OSRw1xXv[n1yTEwOP] + (424 - 414);
                        OSRw1xXv[n1yTEwOP + 1]--;
                    }
                    n1yTEwOP++;
                }
            }
            for (; OSRw1xXv[dH0hfwp5] == 0;)
                dH0hfwp5--;
            for (; dH0hfwp5 >= 0; dH0hfwp5--)
                cout << OSRw1xXv[dH0hfwp5];
            cout << endl;
            YIgDXjKrw1++;
        }
    }
    return 0;
}

