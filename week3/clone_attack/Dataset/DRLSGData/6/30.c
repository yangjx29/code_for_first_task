int main () {
    int I5XVdRNSkC7D [200] [220];
    int JxzBtlhqsYK;
    int GtHhLM8Jl;
    int mB1rKt;
    int HRBntqH901u;
    int um6LJHUN8tI;
    scanf ("%d", &um6LJHUN8tI);
    {
        JxzBtlhqsYK = 1;
        while (JxzBtlhqsYK <= um6LJHUN8tI) {
            int UguNJa8Zj;
            int Nyjz18u7;
            JxzBtlhqsYK = JxzBtlhqsYK +1;
            HRBntqH901u = 0;
            scanf ("%d%d", &UguNJa8Zj, &Nyjz18u7);
            {
                GtHhLM8Jl = 1;
                while (UguNJa8Zj >= GtHhLM8Jl) {
                    {
                        mB1rKt = 1;
                        for (; mB1rKt <= Nyjz18u7;) {
                            scanf ("%d", &I5XVdRNSkC7D[GtHhLM8Jl][mB1rKt]);
                            mB1rKt = mB1rKt + 1;
                        }
                    }
                    GtHhLM8Jl = GtHhLM8Jl +1;
                }
            }
            {
                GtHhLM8Jl = 1;
                for (; GtHhLM8Jl <= UguNJa8Zj;) {
                    HRBntqH901u = HRBntqH901u +I5XVdRNSkC7D[GtHhLM8Jl][1] + I5XVdRNSkC7D[GtHhLM8Jl][Nyjz18u7];
                    GtHhLM8Jl = GtHhLM8Jl +1;
                }
            }
            {
                mB1rKt = 2;
                while (mB1rKt <= Nyjz18u7 -1) {
                    HRBntqH901u = HRBntqH901u +I5XVdRNSkC7D[1][mB1rKt] + I5XVdRNSkC7D[UguNJa8Zj][mB1rKt];
                    mB1rKt = mB1rKt + 1;
                }
            }
            if (UguNJa8Zj == 1) {
                HRBntqH901u = HRBntqH901u / (2);
            }
            printf ("%d\n", HRBntqH901u);
        }
    }
    return 0;
}

