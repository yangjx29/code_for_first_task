int main (int r49SvbDhQNEy, char *JzAqiS3 []) {
    int lX1pyjse;
    int YnZe2xlfDc;
    int lyLvsA;
    int T7sd0VHf;
    int re2fMAh;
    int EYSgk53 [(140 - 40)] [(963 - 863)];
    int FYzkSGcC = (24 - 24);
    scanf ("%d %d", &lX1pyjse, &YnZe2xlfDc);
    {
        T7sd0VHf = (758 - 758);
        while (T7sd0VHf < lX1pyjse) {
            {
                re2fMAh = (495 - 495);
                while (re2fMAh < YnZe2xlfDc) {
                    scanf ("%d", &(EYSgk53[T7sd0VHf][re2fMAh]));
                    re2fMAh++;
                }
            }
            T7sd0VHf++;
        }
    }
    {
        lyLvsA = (729 - 729);
        while (lyLvsA <= lX1pyjse) {
            {
                T7sd0VHf = lyLvsA;
                while (T7sd0VHf < YnZe2xlfDc -lyLvsA) {
                    printf ("%d\n", EYSgk53[lyLvsA][T7sd0VHf]);
                    FYzkSGcC++;
                    T7sd0VHf++;
                }
            }
            if (FYzkSGcC == lX1pyjse * YnZe2xlfDc)
                break;
            {
                re2fMAh = (1038 - 313) - (934 - 210);
                while (re2fMAh < lX1pyjse - lyLvsA) {
                    printf ("%d\n", EYSgk53[re2fMAh][YnZe2xlfDc -(lyLvsA + (234 - 233))]);
                    FYzkSGcC++;
                    re2fMAh++;
                }
            }
            if (FYzkSGcC == lX1pyjse * YnZe2xlfDc)
                break;
            {
                T7sd0VHf = lyLvsA + (92 - 91);
                while (T7sd0VHf >= lyLvsA) {
                    printf ("%d\n", EYSgk53[lX1pyjse - (lyLvsA + (997 - 996))][T7sd0VHf]);
                    FYzkSGcC++;
                    T7sd0VHf--;
                }
            }
            if (FYzkSGcC == lX1pyjse * YnZe2xlfDc)
                break;
            {
                re2fMAh = lyLvsA + 1;
                while (re2fMAh > lyLvsA) {
                    printf ("%d\n", EYSgk53[re2fMAh][lyLvsA]);
                    FYzkSGcC++;
                    re2fMAh--;
                }
            }
            if (FYzkSGcC == lX1pyjse * YnZe2xlfDc)
                break;
            lyLvsA++;
        }
    }
    return (523 - 523);
}

