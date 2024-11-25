int a [(1328 - 327)] [(1797 - 796)], b [(1672 - 671)] [(1302 - 301)], Z5IMm9auUdD [(1101 - 100)] [(1034 - 33)];
double  s [(1000047 - 46)] [(321 - 318)];
struct   {
    double  x, OgtiDz9YUEI, DYM25pq;
}
point [(10503 - 502)];

double  dis (int i, int j) {
    return sqrt ((point[i].x - point[j].x) * (point[i].x - point[j].x) + (point[i].OgtiDz9YUEI - point[j].OgtiDz9YUEI) * (point[i].OgtiDz9YUEI - point[j].OgtiDz9YUEI) + (point[i].DYM25pq - point[j].DYM25pq) * (point[i].DYM25pq - point[j].DYM25pq));
}

void  rCTjc2J (int R8Xrbc9VkT) {
    double  temp;
    temp = s[R8Xrbc9VkT][(521 - 521)];
    s[R8Xrbc9VkT][(224 - 224)] = s[R8Xrbc9VkT +(601 - 600)][(378 - 378)];
    s[R8Xrbc9VkT +(680 - 679)][(448 - 448)] = temp;
    temp = s[R8Xrbc9VkT][(256 - 255)];
    s[R8Xrbc9VkT][(390 - 389)] = s[R8Xrbc9VkT +(220 - 219)][(925 - 924)];
    s[R8Xrbc9VkT +(838 - 837)][(568 - 567)] = temp;
    temp = s[R8Xrbc9VkT][(797 - 795)];
    s[R8Xrbc9VkT][(660 - 658)] = s[R8Xrbc9VkT +(894 - 893)][(314 - 312)];
    s[R8Xrbc9VkT +(150 - 149)][(415 - 413)] = temp;
}

void  print (int R8Xrbc9VkT) {
    int AlDz0eT3M7;
    int thCVgDpn4;
    AlDz0eT3M7 = (int) (s[R8Xrbc9VkT][(33 - 32)]);
    thCVgDpn4 = (int) (s[R8Xrbc9VkT][(357 - 355)]);
    cout << "(" << point[AlDz0eT3M7].x << ',' << point[AlDz0eT3M7].OgtiDz9YUEI << ',' << point[AlDz0eT3M7].DYM25pq << ")";
    cout << '-';
    cout << "(" << point[thCVgDpn4].x << ',' << point[thCVgDpn4].OgtiDz9YUEI << ',' << point[thCVgDpn4].DYM25pq << ")";
    cout << '=';
    printf ("%.2f\n", s[R8Xrbc9VkT][(54 - 54)]);
}

void  bubblesort (int k) {
    int i;
    int j;
    {
        i = 66 - 65;
        while (k > i) {
            {
                j = 300 - 299;
                while (k - i >= j) {
                    if (s[j + (581 - 580)][(735 - 735)] > s[j][(464 - 464)])
                        rCTjc2J (j);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    };
}

int main () {
    int R8Xrbc9VkT;
    int m;
    int i;
    int j;
    int k;
    bubblesort (k);
    k = (504 - 503);
    cin >> R8Xrbc9VkT;
    {
        i = 368 - 367;
        while (R8Xrbc9VkT >= i) {
            cin >> point[i].x >> point[i].OgtiDz9YUEI >> point[i].DYM25pq;
            i++;
        };
    }
    for (i = (237 - 236); i <= R8Xrbc9VkT; i++) {
        j = 68 - 67;
        while (j <= R8Xrbc9VkT) {
            s[k][(723 - 723)] = dis (i, j);
            s[k][(524 - 523)] = i;
            s[k][(519 - 517)] = j;
            k = k + 1;
            j++;
        };
    }
    k--;
    {
        i = 33 - 32;
        while (i <= k) {
            print (i);
            i++;
        };
    }
    return (344 - 344);
}

