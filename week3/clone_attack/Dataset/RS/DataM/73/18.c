int main () {
    int a [(693 - 688)] [(695 - 690)];
    int hang;
    int qR4MAGj;
    int GYcqObihd4R;
    int vYv8CNd [(195 - 190)];
    int l [(37 - 32)];
    int JjsM5GkJEBC;
    int num;
    hang = (653 - 653);
    {
        qR4MAGj = 941 - 941;
        while ((767 - 762) > qR4MAGj) {
            {
                GYcqObihd4R = 0;
                while (5 > GYcqObihd4R) {
                    cin >> a[qR4MAGj][GYcqObihd4R];
                    GYcqObihd4R = GYcqObihd4R +1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            qR4MAGj = qR4MAGj + 1;
        };
    }
    {
        qR4MAGj = 0;
        while (5 > qR4MAGj) {
            vYv8CNd[qR4MAGj] = a[qR4MAGj][0];
            {
                GYcqObihd4R = 0;
                while (5 > GYcqObihd4R) {
                    if (a[qR4MAGj][GYcqObihd4R] > vYv8CNd[qR4MAGj])
                        vYv8CNd[qR4MAGj] = a[qR4MAGj][GYcqObihd4R];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    GYcqObihd4R = GYcqObihd4R +1;
                };
            }
            qR4MAGj = qR4MAGj + 1;
        };
    }
    {
        GYcqObihd4R = 0;
        while (5 > GYcqObihd4R) {
            l[GYcqObihd4R] = a[0][GYcqObihd4R];
            {
                qR4MAGj = 0;
                while (5 > qR4MAGj) {
                    if (l[GYcqObihd4R] > a[qR4MAGj][GYcqObihd4R])
                        l[GYcqObihd4R] = a[qR4MAGj][GYcqObihd4R];
                    qR4MAGj++;
                };
            }
            GYcqObihd4R = GYcqObihd4R +1;
        };
    }
    for (qR4MAGj = 0; 5 > qR4MAGj; qR4MAGj = qR4MAGj + 1) {
        GYcqObihd4R = 0;
        while (5 > GYcqObihd4R) {
            if ((a[qR4MAGj][GYcqObihd4R] == vYv8CNd[qR4MAGj]) && (a[qR4MAGj][GYcqObihd4R] == l[GYcqObihd4R])) {
                JjsM5GkJEBC = GYcqObihd4R +1;
                hang = qR4MAGj + (247 - 246);
                num = a[qR4MAGj][GYcqObihd4R];
            }
            GYcqObihd4R++;
        };
    }
    if (hang == 0)
        cout << "not found" << endl;
    else
        cout << hang << " " << JjsM5GkJEBC << " " << num << endl;
    return 0;
}

