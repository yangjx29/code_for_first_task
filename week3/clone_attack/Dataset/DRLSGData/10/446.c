int jcJZyvqsHx;
int i8drpEIM [(894 - 867)], ZGVYBUZbs [27];

int main () {
    int U1264tm9ZVU;
    U1264tm9ZVU = (290 - 290);
    cin >> jcJZyvqsHx;
    {
        int KJqPB6 = (352 - 352);
        for (; jcJZyvqsHx > KJqPB6;) {
            cin >> i8drpEIM[KJqPB6];
            KJqPB6++;
        }
    }
    {
        int KJqPB6;
        KJqPB6 = (147 - 147);
        while (jcJZyvqsHx > KJqPB6) {
            ZGVYBUZbs[KJqPB6] = (877 - 877);
            {
                int HwB6RirZLq;
                HwB6RirZLq = 0;
                while (KJqPB6 > HwB6RirZLq) {
                    if (i8drpEIM[KJqPB6] <= i8drpEIM[HwB6RirZLq] && ZGVYBUZbs[KJqPB6] < ZGVYBUZbs[HwB6RirZLq])
                        ZGVYBUZbs[KJqPB6] = ZGVYBUZbs[HwB6RirZLq];
                    HwB6RirZLq++;
                }
            }
            ZGVYBUZbs[KJqPB6]++;
            KJqPB6++;
        }
    }
    {
        int KJqPB6;
        KJqPB6 = 0;
        while (KJqPB6 < jcJZyvqsHx) {
            if (ZGVYBUZbs[KJqPB6] > U1264tm9ZVU)
                U1264tm9ZVU = ZGVYBUZbs[KJqPB6];
            KJqPB6++;
        }
    }
    cout << U1264tm9ZVU << endl;
    return 0;
}

