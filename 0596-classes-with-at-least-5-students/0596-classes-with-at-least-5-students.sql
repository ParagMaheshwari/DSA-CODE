Select Class
from courses 
group by class 
having count(student) >= 5;
