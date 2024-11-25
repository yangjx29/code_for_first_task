int main () {
    int VqL8VNoh, PyTemjgN, Ui2yJ6BX, SWnIgpt0M5, a [26] = {0};
    char qWcsJdjLzKS [100005] = {0};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin >> VqL8VNoh;
    {
        Ui2yJ6BX = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Ui2yJ6BX < VqL8VNoh) {
            {
                PyTemjgN = 0;
                while (PyTemjgN < 26) {
                    a[PyTemjgN] = 0;
                    PyTemjgN = PyTemjgN +1;
                };
            }
            cin >> qWcsJdjLzKS;
            SWnIgpt0M5 = strlen (qWcsJdjLzKS);
            {
                PyTemjgN = 0;
                while (PyTemjgN < SWnIgpt0M5) {
                    a[qWcsJdjLzKS[PyTemjgN] - 'a']++;
                    PyTemjgN++;
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
            {
                PyTemjgN = 0;
                while (PyTemjgN < SWnIgpt0M5) {
                    if (a[qWcsJdjLzKS[PyTemjgN] - 'a'] == 1)
                        break;
                    PyTemjgN++;
                };
            }
            Ui2yJ6BX++;
            if (PyTemjgN < SWnIgpt0M5 &&a[qWcsJdjLzKS[PyTemjgN] - 'a'] == 1)
                cout << qWcsJdjLzKS[PyTemjgN] << endl;
            else
                cout << "no" << endl;
        };
    }
    return 0;
}

