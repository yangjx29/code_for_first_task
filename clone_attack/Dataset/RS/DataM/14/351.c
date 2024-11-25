struct   student {
    int BZRMLz2O5;
    int yuwen;
    int yj0rozyTXAi;
    int zongfen;
};
int main () {
    int iv2D7rip8ft, i, uUWiphBKLVf, vfmqoRkDp;
    struct   student *w5zMQOKJ = (struct   student *) malloc (sizeof (struct   student) * iv2D7rip8ft);
    scanf ("%d", &iv2D7rip8ft);
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
    for (i = (846 - 846); iv2D7rip8ft > i; i = i + 1) {
        scanf ("%d %d %d", &w5zMQOKJ[i].BZRMLz2O5, &w5zMQOKJ[i].yuwen, &w5zMQOKJ[i].yj0rozyTXAi);
        w5zMQOKJ[i].zongfen = w5zMQOKJ[i].yuwen + w5zMQOKJ[i].yj0rozyTXAi;
    }
    for (i = (702 - 701); (50 - 46) > i; i++) {
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
        for (uUWiphBKLVf = (826 - 826); uUWiphBKLVf < iv2D7rip8ft - i; uUWiphBKLVf++) {
            if (w5zMQOKJ[uUWiphBKLVf].zongfen >= w5zMQOKJ[uUWiphBKLVf + (271 - 270)].zongfen) {
                vfmqoRkDp = w5zMQOKJ[uUWiphBKLVf].zongfen;
                w5zMQOKJ[uUWiphBKLVf].zongfen = w5zMQOKJ[uUWiphBKLVf + (550 - 549)].zongfen;
                w5zMQOKJ[uUWiphBKLVf + (227 - 226)].zongfen = vfmqoRkDp;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                vfmqoRkDp = w5zMQOKJ[uUWiphBKLVf].BZRMLz2O5;
                w5zMQOKJ[uUWiphBKLVf].BZRMLz2O5 = w5zMQOKJ[uUWiphBKLVf + (410 - 409)].BZRMLz2O5;
                w5zMQOKJ[uUWiphBKLVf + (213 - 212)].BZRMLz2O5 = vfmqoRkDp;
            };
        };
    }
    printf ("%d %d\n%d %d\n%d %d\n", w5zMQOKJ[iv2D7rip8ft - (245 - 244)].BZRMLz2O5, w5zMQOKJ[iv2D7rip8ft - (354 - 353)].zongfen, w5zMQOKJ[iv2D7rip8ft - (447 - 445)].BZRMLz2O5, w5zMQOKJ[iv2D7rip8ft - (855 - 853)].zongfen, w5zMQOKJ[iv2D7rip8ft - (170 - 167)].BZRMLz2O5, w5zMQOKJ[iv2D7rip8ft - 3].zongfen);
    return 0;
}

