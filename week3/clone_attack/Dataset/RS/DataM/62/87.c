int main () {
    int mDmX3St;
    int lena;
    mDmX3St = 0;
    char a [200];
    char *gvbJlXF;
    cin.getline (a, 200);
    gvbJlXF = a;
    lena = strlen (a);
    for (int xoy4IR6S = 0;
    lena > xoy4IR6S; xoy4IR6S++) {
        if (!(' ' != *gvbJlXF) && !(0 != mDmX3St)) {
            mDmX3St = 1;
            cout << *gvbJlXF;
        }
        if (*gvbJlXF == ' ' && mDmX3St == 1)
            ;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (*gvbJlXF != ' ') {
            cout << *gvbJlXF;
            mDmX3St = 0;
        }
        gvbJlXF++;
    }
    return 0;
}

