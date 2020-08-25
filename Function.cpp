#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

struct Applicant {
  std::string name;
  std::string id;
  std::vector<std::string> skills;
};

struct Job {
  std::string title;
  std::string id;
  std::vector<std::string> skills_required;
};

struct Results {
  std::string applicant_id;
  std::string job_id;
  float score = 0.;
};


float calculate_match(const Applicant& applicant, const Job& job) {

float result = 0.;
vector<pair<size_t, size_t>> matches;

 // here we match the jobs skill and contidions with the job skill and condition requirements  
    
    for(auto it1 = applicant.skills.cbegin(); it1 != applicant.skills_required.cend(); ++it1)
      auto it2 = find(job.skills_required.cbegin(), job.skills_required.cend(), *it1);
        if (it2 != job.skills_required.cend())
        {
            matches.push_back(make_pair(it1 - applicant.skills.cbegin(), it2 - jobs.cbegin()));
        }
    }
    
    for_each(matches.cbegin(), matches.cend(), [](const pair<size_t, size_t> &p)
    {
        // Calculate the result based on the number of matches
        
     }
     
     return result;
   
}

int main()
{

  std::vector<Jobs> jobs;
  std::vector<Applicant> applicants;
  std::vector<Results> results;

  for (const auto& job : jobs) {
    for (const auto& applicant : applicants) {
      auto score = calculate_match(applicant, job);
        // store result in results
    results.emplace_back(Result{applicant.id, job.id, score});
    }
  }
}

