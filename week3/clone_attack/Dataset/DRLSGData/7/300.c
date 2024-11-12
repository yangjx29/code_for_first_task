void  main () {
    int Xelc6p2TJ;
    char azwqNW [260];
    gets (azwqNW);
    puts (azwqNW);
    int WbMvDf8rQka;
    char Z7UcVwqaFjnk [260];
    gets (Z7UcVwqaFjnk);
    char *YspXxmdb0or8;
    int u3UMl6zGCJN;
    int HdLHOmVTixw;
    char *T6liXD8n;
    char *zk2RmOaNC;
    int TiQBjGZ;
    char oh3lbT [260];
    gets (oh3lbT);
    HdLHOmVTixw = strlen (azwqNW);
    u3UMl6zGCJN = strlen (Z7UcVwqaFjnk);
    for (WbMvDf8rQka = 0; HdLHOmVTixw -u3UMl6zGCJN + 1 > WbMvDf8rQka; WbMvDf8rQka = WbMvDf8rQka +1) {
        T6liXD8n = azwqNW + WbMvDf8rQka;
        Xelc6p2TJ = 0;
        {
            TiQBjGZ = 0;
            for (; u3UMl6zGCJN > TiQBjGZ;) {
                if (!(*(YspXxmdb0or8 +TiQBjGZ) != *(T6liXD8n +TiQBjGZ)))
                    Xelc6p2TJ = Xelc6p2TJ +1;
                TiQBjGZ = TiQBjGZ +1;
            }
        }
        if (Xelc6p2TJ == u3UMl6zGCJN) {
            for (TiQBjGZ = 0; TiQBjGZ < u3UMl6zGCJN; TiQBjGZ = TiQBjGZ +1)
                *(T6liXD8n +TiQBjGZ) = *(zk2RmOaNC + TiQBjGZ);
            zk2RmOaNC = oh3lbT;
            T6liXD8n = azwqNW + WbMvDf8rQka;
            break;
        }
        YspXxmdb0or8 = Z7UcVwqaFjnk;
    }
}

