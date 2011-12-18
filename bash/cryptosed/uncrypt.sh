#! /bin/bash

for (( i=0;i<10;i++ ));do
	for (( j=0;j<10;j++ ));do
		for (( k=0;k<10;k++ ));do
			for (( z=0;z<10;z++ ));do
			var="$i$j$k$z"
			echo $var;
			` 7za e tex2html-test.tar.7z -p$var -y >/dev/null 2>&1 ` 
			if [ $? = 0 ]; then
				echo "$i$j$k$z"
				exit 0
			fi				
			done	
		done
	done
done

