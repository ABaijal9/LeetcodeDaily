select customer_id, count(*) as count_no_trans  from Visits 
where visit_id not in 
(select v.visit_id as count_no_trans 
from Transactions t , Visits v 
where v.visit_id = t.visit_id)
group by customer_id;