int main () {
    int X3AiRtTHd;
    int ZpKjX3BUo;
    int I9ZVhTNM;
    int Lzqa761;
    int p;
    int j;
    scanf ("%d", &X3AiRtTHd);
    {
        ZpKjX3BUo = 2;
        while (X3AiRtTHd / 2 >= ZpKjX3BUo) {
            {
                I9ZVhTNM = 2;
                while (ZpKjX3BUo -1 >= I9ZVhTNM) {
                    Lzqa761 = I9ZVhTNM;
                    if (!(0 != ZpKjX3BUo % I9ZVhTNM))
                        break;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    I9ZVhTNM++;
                };
            }
            if (Lzqa761 == ZpKjX3BUo -1) {
                {
                    j = 2;
                    while (j <= X3AiRtTHd -ZpKjX3BUo-1) {
                        p = j;
                        if ((X3AiRtTHd -ZpKjX3BUo) % j == 0)
                            break;
                        j = j + 1;
                    };
                }
                if (p == X3AiRtTHd -ZpKjX3BUo-1)
                    printf ("%d %d\n", ZpKjX3BUo, X3AiRtTHd -ZpKjX3BUo);
            }
            ZpKjX3BUo = ZpKjX3BUo +1;
        };
    };
}

