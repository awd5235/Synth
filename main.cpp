/*==================== Using Git =====================
 
 -------------------One Time Setup--------------------
 1. Navigate to folder containing desired source code
 2. "git init" to create a local repository in the .git folder by default it will be called master
 3. On github create a remote repository and copy it's SSH URL
 4. Link remote repo to the local one and give it the name origin: "git remote add origin <URL from step 3>"
 
 
 -------------------Routine Maintenance----------------
 1. Make changes to source
 2. In terminal navigate to source file enclosing folder (Don't enter .git)
 3. Optional: "git status"
 4. "git add <changed file>" in this case main.cpp or simply "git add ." to add all
 5. Optional: "git diff" to see changes added
 6. git commit -m "Message detailing changes made"
 7. "git push origin master" changes will now be pushed to github
*/


#include <iostream>

int main() {
    
    
    return 0;
}
