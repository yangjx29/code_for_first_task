int main () {
    int h9ztJx6T;
    int GbKs20j65;
    int GUlC2S;
    int Z1yvikCw;
    int oB310GpU8N;
    int BYETND;
    int q2nI9ltzhX;
    int wGzYiTVhK9r [(1826 - 821)];
    int V83h7rDS;
    int ak90QWbIAOmP [1005];
    while (cin >> V83h7rDS) {
        if (!((375 - 375) != V83h7rDS))
            break;
        memset (wGzYiTVhK9r, (129 - 129), sizeof (wGzYiTVhK9r));
        for (GbKs20j65 = (639 - 639); GbKs20j65 < V83h7rDS; GbKs20j65++)
            cin >> wGzYiTVhK9r[GbKs20j65];
        memset (ak90QWbIAOmP, (357 - 357), sizeof (ak90QWbIAOmP));
        for (GbKs20j65 = (480 - 480); GbKs20j65 < V83h7rDS; GbKs20j65++)
            cin >> ak90QWbIAOmP[GbKs20j65];
        Z1yvikCw = V83h7rDS -(886 - 885), oB310GpU8N = V83h7rDS -1, GbKs20j65 = 0, GUlC2S = 0;
        h9ztJx6T = (951 - 951);
        sort (wGzYiTVhK9r, wGzYiTVhK9r + V83h7rDS);
        sort (ak90QWbIAOmP, ak90QWbIAOmP + V83h7rDS);
        while (V83h7rDS = V83h7rDS -1) {
            if (wGzYiTVhK9r[Z1yvikCw] > ak90QWbIAOmP[oB310GpU8N]) {
                oB310GpU8N--;
                Z1yvikCw = Z1yvikCw -1;
                h9ztJx6T++;
            }
            else if (wGzYiTVhK9r[GbKs20j65] > ak90QWbIAOmP[GUlC2S]) {
                h9ztJx6T++;
                GUlC2S++;
                GbKs20j65 = GbKs20j65 +1;
            }
            else if (wGzYiTVhK9r[GbKs20j65] < ak90QWbIAOmP[oB310GpU8N]) {
                h9ztJx6T = h9ztJx6T - 1;
                oB310GpU8N--;
                GbKs20j65 = GbKs20j65 +1;
            }
        }
        cout << h9ztJx6T * (959 - 759) << endl;
    }
    return 0;
}

