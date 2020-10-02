  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    FILE * fpt = fopen("uwu.c", "w");
    fprintf(fpt, "#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\n\n\nint main()\n{\nprintf(\"uwu whore\");\nreturn 0;\n}");
    fclose(fp);
    return 0;
}
