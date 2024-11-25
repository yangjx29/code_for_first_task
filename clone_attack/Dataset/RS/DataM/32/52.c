int main () {
    int CXPLCwekna0D;
    scanf ("%d", &CXPLCwekna0D);
    for (; CXPLCwekna0D > 0;) {
        char YHD0RKj [100], dWOhIJarY [100];
        int gnWFzJGqryc, IVn83IaG, XT9scKYP7SRG = 0, GJxHnfujM = 0, PCJiwOlArN5z;
        CXPLCwekna0D = CXPLCwekna0D -1;
        scanf ("%s\n%s", &YHD0RKj, &dWOhIJarY);
        while (!('\0' == dWOhIJarY[GJxHnfujM])) {
            GJxHnfujM = GJxHnfujM +1;
        }
        PCJiwOlArN5z = XT9scKYP7SRG -GJxHnfujM;
        GJxHnfujM = 0;
        for (; !('\0' == YHD0RKj[XT9scKYP7SRG]);) {
            XT9scKYP7SRG = XT9scKYP7SRG +1;
        }
        {
            IVn83IaG = 928 - 927;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (IVn83IaG >= PCJiwOlArN5z) {
                if (YHD0RKj[IVn83IaG] >= dWOhIJarY[IVn83IaG -PCJiwOlArN5z]) {
                    YHD0RKj[IVn83IaG] = YHD0RKj[IVn83IaG] - dWOhIJarY[IVn83IaG -PCJiwOlArN5z] + '0';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                else {
                    YHD0RKj[IVn83IaG -1]--;
                    YHD0RKj[IVn83IaG] = YHD0RKj[IVn83IaG] + 10 - dWOhIJarY[IVn83IaG -PCJiwOlArN5z] + '0';
                }
                IVn83IaG--;
            };
        }
        {
            GJxHnfujM;
            while (GJxHnfujM < XT9scKYP7SRG) {
                printf ("%c", YHD0RKj[GJxHnfujM]);
                GJxHnfujM = GJxHnfujM +1;
            };
        }
        printf ("\n");
    }
    return 0;
}

