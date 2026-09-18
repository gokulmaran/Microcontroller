Gokulraaj Manimaran
Backend Software Engineer  ·  C++17  ·  Go  ·  Distributed Systems  ·  Low-Latency
Chennai, India   |   github.com/gokulmaran   |   linkedin.com/in/gokulraajrm   |   rmgokulraaj97@gmail.com
ABOUT ME
Backend engineer with 5+ years of experience designing microservices for fintech and trading platforms. I care about systems that are fast, observable, and hard to break. Today I'm a Senior Backend Engineer at SBI Securities, building services that process 500K+ trades a day for 500+ active traders.
My background runs from Linux kernel drivers to distributed backends, so I'm comfortable debugging at any layer: a slow SQL query, a race condition, or a DMA transfer.
WHAT I WORK ON
•	Low-latency services in C++17 and Go, tuned for high throughput and tight p99 latency
•	Event-driven architecture and microservices design (HLD and LLD)
•	Concurrency: lock-free data structures, race-condition detection, concurrency control
•	Database and cache performance: B-tree indexing, read replicas, query optimization, Redis cache-aside
•	Reliability engineering: circuit breakers, SLO/SLA monitoring, incident response, chaos engineering
•	Systems programming: Linux device drivers, DMA zero-copy, NAPI packet batching
TECH STACK
Area	Skills
Languages	C++17, Go, SQL
Architecture	Microservices, HLD / LLD, REST API design, load balancing, event-driven design
Data & Storage	MySQL, PostgreSQL, Redis, B-tree indexing, query optimization, caching strategies
Production Ops	SLO/SLA management, Grafana monitoring, observability, deployment automation
Concurrency & Testing	Lock-free data structures, concurrency control, TDD, unit testing, code coverage
Infra & Tools	Azure, Linux, CI/CD
EXPERIENCE
Role	Company	Period
Senior Backend Engineer	SBI Securities, Chennai	Aug 2025 – Present
Software Engineer	Market Simplified, Chennai	Dec 2022 – Jul 2025
Software Engineer	ADLINK Technology, Chennai	Feb 2022 – Nov 2022
Software Engineering Intern	Valeo, Chennai	Jul 2021 – Jan 2022
SELECTED IMPACT
Performance
•	Cut response time by 40% (150ms → 90ms) on a 500K+ trades/day platform by moving to an event-driven architecture
•	Reached 50K RPS at 10ms p99 with B-tree indexing, read replicas, and load balancing; reduced slow queries by 87% (15% → 2%)
•	Built REST APIs for 50K+ concurrent users with request batching and HTTP/2 tuning, holding 30K RPS at 15ms p99
•	Added Redis cache-aside caching with a 90% hit rate, cutting query load by 45%
•	Improved Linux driver throughput by 15% and cut CPU usage by 25% using DMA zero-copy and NAPI batching
Reliability
•	Added circuit breakers with adaptive timeouts, cutting cascading-failure incidents by 83% (12 → 2 per month)
•	Built Grafana-based SLO/SLA monitoring, reducing mean time to detection by 62.5% (8 → 3 min)
•	Halved mean time to resolution (60 → 30 min) by mentoring engineers on chaos engineering and incident protocols
Engineering Practices
•	Reached 88% code coverage through automated testing and cut monthly defects by 33%
•	Removed 60% of inter-service dependencies with Repository Pattern refactoring; deployments dropped from 2 hours to 20 minutes
•	Set up CI/CD with static analysis, reducing defects by 25% and code-review turnaround from 3 days to 8 hours
PROJECTS
I'm building open-source, synthetic-data versions of the patterns I use in production. No employer code is published here.
Project	Description	Stack
order-matching-engine
Price-time priority order book with lock-free ring buffer, benchmarked for throughput and p99 latency	C++17
lockfree-structures
Lock-free queue, stack, and hash map with memory-ordering notes and race tests	C++17
go-resilience-kit
Circuit breaker with adaptive timeouts, retry with jitter, bulkhead, and rate limiter	Go
db-performance-lab
Before/after EXPLAIN ANALYZE on millions of rows: B-tree indexing and read replicas	MySQL, PostgreSQL
slo-observability
Grafana dashboards, alert rules, SLO definitions, and runbooks	Grafana
dsa-solutions
1,000+ problems organized by pattern, with complexity notes	C++, Go
PROBLEM SOLVING
1,035 problems solved: LeetCode (615) and GeeksforGeeks (420). Solutions are organized by pattern in dsa-solutions.
CURRENTLY
•	Building open-source projects in low-latency C++ and Go resilience patterns
•	Looking to contribute to Go and C++ open-source projects
•	Ask me about: lock-free programming, latency tuning, database indexing, SLOs, and incident response
EDUCATION
B.E. Electronics & Communication Engineering — Coimbatore Institute of Engineering and Technology (Anna University), 2014 – 2018
