int ncZQphaKqf2s [(216 - 116)] [100], QAtvMi2rcm, WxCN8OF;

void  display (int step) {
    int DKAzQRJtmZrW;
    int CyArZzXT;
    int i;
    if (step > QAtvMi2rcm +WxCN8OF-(698 - 697))
        return;
    if (step < WxCN8OF) {
        CyArZzXT = step - (98 - 97);
        {
            i = CyArZzXT;
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
            while (i >= (335 - 335) && CyArZzXT -i < QAtvMi2rcm) {
                cout << ncZQphaKqf2s[CyArZzXT -i][i] << endl;
                i--;
            };
        };
    }
    else {
        DKAzQRJtmZrW = step - WxCN8OF;
        for (i = DKAzQRJtmZrW; i < QAtvMi2rcm &&WxCN8OF-(453 - 452) + DKAzQRJtmZrW -i >= (951 - 951); i = i + 1)
            cout << ncZQphaKqf2s[i][WxCN8OF -1 + DKAzQRJtmZrW -i] << endl;
    }
    display (step + 1);
}

int main () {
    int i;
    int j;
    cin >> QAtvMi2rcm >> WxCN8OF;
    for (i = 0; i < QAtvMi2rcm; i++)
        for (j = 0; j < WxCN8OF; j++)
            cin >> *(*(ncZQphaKqf2s + i) + j);
    display (1);
}

