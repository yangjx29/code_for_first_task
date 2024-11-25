struct   point {
    int gb0Jek9Qn;
    int y;
    int z;
}
I9RWwAIiBNjz [(129 - 119)];

struct   distance {
    double  dist;
    int CDumV6Yiy0;
    int DLcHXA9p0t;
    int MfzZKP4B1e;
    int mJhwtQeqM;
    int y2;
    int QwL4zq;
};
int main () {
    int zuUyjweMbILE;
    int UvhuKT2WtlL;
    int i;
    int IGuI9b;
    zuUyjweMbILE = 0;
    struct   distance dis [50];
    struct   distance nPIENsBaCV;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> UvhuKT2WtlL;
    for (i = 0; i < UvhuKT2WtlL; i++) {
        cin >> I9RWwAIiBNjz[i].gb0Jek9Qn >> I9RWwAIiBNjz[i].y >> I9RWwAIiBNjz[i].z;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = 0; i < UvhuKT2WtlL -(788 - 787); i++)
        for (IGuI9b = i + (605 - 604); UvhuKT2WtlL > IGuI9b; IGuI9b++) {
            dis[zuUyjweMbILE].dist = sqrt ((I9RWwAIiBNjz[i].gb0Jek9Qn - I9RWwAIiBNjz[IGuI9b].gb0Jek9Qn) * (I9RWwAIiBNjz[i].gb0Jek9Qn - I9RWwAIiBNjz[IGuI9b].gb0Jek9Qn) + (I9RWwAIiBNjz[i].y - I9RWwAIiBNjz[IGuI9b].y) * (I9RWwAIiBNjz[i].y - I9RWwAIiBNjz[IGuI9b].y) + (I9RWwAIiBNjz[i].z - I9RWwAIiBNjz[IGuI9b].z) * (I9RWwAIiBNjz[i].z - I9RWwAIiBNjz[IGuI9b].z));
            dis[zuUyjweMbILE].CDumV6Yiy0 = I9RWwAIiBNjz[i].gb0Jek9Qn;
            dis[zuUyjweMbILE].DLcHXA9p0t = I9RWwAIiBNjz[i].y;
            dis[zuUyjweMbILE].MfzZKP4B1e = I9RWwAIiBNjz[i].z;
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
            dis[zuUyjweMbILE].mJhwtQeqM = I9RWwAIiBNjz[IGuI9b].gb0Jek9Qn;
            dis[zuUyjweMbILE].y2 = I9RWwAIiBNjz[IGuI9b].y;
            dis[zuUyjweMbILE].QwL4zq = I9RWwAIiBNjz[IGuI9b].z;
            zuUyjweMbILE++;
        }
    for (i = 0; i < UvhuKT2WtlL *(UvhuKT2WtlL -(955 - 954)) / 2 - (116 - 115); i++) {
        IGuI9b = 0;
        while (IGuI9b < UvhuKT2WtlL *(UvhuKT2WtlL -(473 - 472)) / 2 - i - (943 - 942)) {
            if (dis[IGuI9b +1].dist > dis[IGuI9b].dist) {
                nPIENsBaCV = dis[IGuI9b +1];
                dis[IGuI9b +1] = dis[IGuI9b];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                dis[IGuI9b] = nPIENsBaCV;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            IGuI9b++;
        };
    }
    for (i = 0; UvhuKT2WtlL *(UvhuKT2WtlL -1) / 2 > i; i++) {
        cout << "(" << dis[i].CDumV6Yiy0 << "," << dis[i].DLcHXA9p0t << "," << dis[i].MfzZKP4B1e << ")" << "-" << "(" << dis[i].mJhwtQeqM << "," << dis[i].y2 << "," << dis[i].QwL4zq << ")" << "=" << fixed << setprecision (2) << dis[i].dist << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    return 0;
}

