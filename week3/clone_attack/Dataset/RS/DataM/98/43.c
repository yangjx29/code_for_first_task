int main () {
    int gtoBvm5Gh [1000], VeSn3wPZ, UOpDcwVjNWQd, J2s3KV = 0;
    char p1ZlrFhJ [1000] [40] = {""};
    scanf ("%d", &UOpDcwVjNWQd);
    {
        VeSn3wPZ = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (UOpDcwVjNWQd > VeSn3wPZ) {
            scanf ("%s", p1ZlrFhJ[VeSn3wPZ]), gtoBvm5Gh[VeSn3wPZ] = strlen (p1ZlrFhJ[VeSn3wPZ]);
            VeSn3wPZ = VeSn3wPZ +1;
        };
    }
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
    for (VeSn3wPZ = 0; VeSn3wPZ < UOpDcwVjNWQd -1; VeSn3wPZ = VeSn3wPZ +1) {
        J2s3KV = J2s3KV +gtoBvm5Gh[VeSn3wPZ] + 1;
        if (81 > J2s3KV +gtoBvm5Gh[VeSn3wPZ +1])
            printf ("%s ", p1ZlrFhJ[VeSn3wPZ]);
        else
            printf ("%s\n", p1ZlrFhJ[VeSn3wPZ]), J2s3KV = 0;
    }
    printf ("%s", p1ZlrFhJ[UOpDcwVjNWQd -1]);
    return 0;
}

