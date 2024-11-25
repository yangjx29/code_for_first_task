int main () {
    int time;
    int i;
    int De9L8hUrR5KV;
    int eJQGYSpbUgsD;
    int IdvH8OGLhR;
    scanf ("%d", &De9L8hUrR5KV);
    for (i = (636 - 636); De9L8hUrR5KV > i; i++) {
        scanf ("%d", &eJQGYSpbUgsD);
        if (eJQGYSpbUgsD == 0) {
        }
        else {
            int *num = (int *) malloc (sizeof (int) * eJQGYSpbUgsD);
            free (num);
            {
                IdvH8OGLhR = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (IdvH8OGLhR < eJQGYSpbUgsD) {
                    scanf ("%d", &num[IdvH8OGLhR]);
                    IdvH8OGLhR++;
                };
            }
            for (IdvH8OGLhR = eJQGYSpbUgsD - 1; 0 <= IdvH8OGLhR; IdvH8OGLhR--) {
                time = num[IdvH8OGLhR] + (IdvH8OGLhR +1) * 3;
                if (time < 60) {
                    printf ("%d\n", 60 - (IdvH8OGLhR +1) * 3);
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
                    break;
                }
                else if (time < 63) {
                    printf ("%d\n", num[IdvH8OGLhR]);
                    break;
                };
            };
        };
    }
    return 0;
}

