#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dst, const char *src)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (dst[i] != '\0')
		i++;
	j = 0;
       while (src[j] != '\0')
       {
       		dst[i] = src[j];
		i++;
		j++;
       }
       dst[i] = '\0';
	return (dst);    
}

int main(void)
{
	char src[50], dst [50];
	strcpy(src, "This is the source");
	strcpy(dst, "This is the destination");

	*ft_strcat(dst, src);
	
	printf("Final Destination string : |%s|" , dst);
	return (0);
}
