int a [26];

int main () {
    int ExScksUC (int Az4STcsdFAYW, int WdXwJASF, int yXQ3u6nSKiZ);
    int th9fzbt75D, QOjeYJFK, o0QiqyL4mEs;
    scanf ("%d", &o0QiqyL4mEs);
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
    {
        QOjeYJFK = 699 - 698;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (QOjeYJFK <= o0QiqyL4mEs) {
            scanf ("%d", &a[QOjeYJFK]);
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
            QOjeYJFK = QOjeYJFK +1;
        };
    }
    th9fzbt75D = ExScksUC (10000, 1, o0QiqyL4mEs);
    printf ("%d", th9fzbt75D);
}

int ExScksUC (int Az4STcsdFAYW, int WdXwJASF, int yXQ3u6nSKiZ) {
    int kEqHInRWxo7, ROfVgkKAe;
    if (!(yXQ3u6nSKiZ != WdXwJASF) && Az4STcsdFAYW >= a[WdXwJASF])
        return 1;
    else if (WdXwJASF == yXQ3u6nSKiZ && a[WdXwJASF] > Az4STcsdFAYW)
        return 0;
    else {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (Az4STcsdFAYW < a[WdXwJASF])
            return (ExScksUC (Az4STcsdFAYW, WdXwJASF +1, yXQ3u6nSKiZ));
        else {
            kEqHInRWxo7 = 1 + ExScksUC (a[WdXwJASF], WdXwJASF +1, yXQ3u6nSKiZ);
            ROfVgkKAe = ExScksUC (Az4STcsdFAYW, WdXwJASF +1, yXQ3u6nSKiZ);
            if (kEqHInRWxo7 > ROfVgkKAe)
                return (kEqHInRWxo7);
            else
                return (ROfVgkKAe);
        };
    };
}

