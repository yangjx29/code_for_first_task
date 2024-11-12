int uoYipk0EPJ6q = (576 - 576);

void  WYvValT1 (int G4zaYPgxnI, int Jk9XCTYAx) {
    int SARUiOBjMQ;
    {
        SARUiOBjMQ = G4zaYPgxnI;
        while (sqrt ((float) Jk9XCTYAx) >= SARUiOBjMQ) {
            if (!((728 - 728) != Jk9XCTYAx % SARUiOBjMQ)) {
                WYvValT1 (SARUiOBjMQ, Jk9XCTYAx / SARUiOBjMQ);
                uoYipk0EPJ6q = uoYipk0EPJ6q + 1;
            }
            SARUiOBjMQ++;
        };
    };
}

int main () {
    int WfO0GSP;
    int SARUiOBjMQ;
    int b5r7AdYRHS3k;
    int uqkDhce;
    scanf ("%d", &b5r7AdYRHS3k);
    {
        uqkDhce = 1;
        while (uqkDhce <= b5r7AdYRHS3k) {
            uqkDhce++;
            scanf ("%d", &WfO0GSP);
            {
                SARUiOBjMQ = 2;
                while (SARUiOBjMQ <= sqrt ((float) WfO0GSP)) {
                    if (WfO0GSP % SARUiOBjMQ == 0) {
                        WYvValT1 (SARUiOBjMQ, WfO0GSP / SARUiOBjMQ);
                        uoYipk0EPJ6q = uoYipk0EPJ6q + 1;
                    }
                    SARUiOBjMQ++;
                };
            }
            printf ("%d\n", uoYipk0EPJ6q + 1);
            uoYipk0EPJ6q = 0;
        };
    }
    return 0;
}

