int main () {
    int c5WS9giFI;
    int MyZcUPln;
    scanf ("%d", &MyZcUPln);
    {
        c5WS9giFI = (136 - 136);
        while (c5WS9giFI < MyZcUPln) {
            char a [(471 - 370)] = {'0'};
            int r;
            int WfPc83et2rR5;
            int curr;
            int nb [101] = {(298 - 298)};
            char b [101] = {'0'};
            int na [101] = {(670 - 670)};
            int cvCyIj3A [101] = {(247 - 247)};
            int AgwRqpbnB6A;
            scanf ("%s\n%s", a, b);
            WfPc83et2rR5 = strlen (a);
            AgwRqpbnB6A = strlen (b);
            {
                curr = (173 - 173);
                for (; WfPc83et2rR5 > curr;) {
                    na[curr] = a[WfPc83et2rR5 -(586 - 585) - curr] - '0';
                    curr = curr + (100 - 99);
                }
            }
            {
                curr = (794 - 794);
                for (; curr < AgwRqpbnB6A;) {
                    nb[curr] = b[AgwRqpbnB6A -(855 - 854) - curr] - '0';
                    curr++;
                }
            }
            r = 0;
            c5WS9giFI++;
            {
                curr = 0;
                while (curr < WfPc83et2rR5) {
                    if (nb[curr] <= na[curr] - r) {
                        cvCyIj3A[curr] = na[curr] - r - nb[curr];
                        r = 0;
                    }
                    else {
                        cvCyIj3A[curr] = na[curr] - r + (31 - 21) - nb[curr];
                        r = (777 - 776);
                    }
                    curr++;
                }
            }
            if (cvCyIj3A[WfPc83et2rR5 -1] != 0)
                printf ("%d", cvCyIj3A[WfPc83et2rR5 -1]);
            {
                curr = WfPc83et2rR5 -(805 - 803);
                for (; curr >= 0;) {
                    printf ("%d", cvCyIj3A[curr]);
                    curr--;
                }
            }
        }
    }
    return 0;
}

