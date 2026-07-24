#include <array>
#include <string>
#include <vector>
#include <algorithm>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    if(student_scores.empty()) return {};
    std::vector<int> new_scores;
    for(auto score : student_scores){
        new_scores.emplace_back(score);
    }
    return new_scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int count=0;
    for(auto score : student_scores){
        if(score <= 40){ count++;}
    }
    return count;
}

// Determine how many of the provided student scores were 'the best' based on the provided threshold.
std::vector<int> above_threshold(std::vector<int> student_scores, int threshold) {
    // TODO: Implement above_threshold
    std::vector<int> best_scores;
    for(auto score : student_scores){
    if(score >= threshold){
        best_scores.emplace_back(score);
        }    
     }
   return best_scores;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement above_threshold
    std::array<int,4> thresholds;
    int interval_width = (highest_score - 40) / 4;
    for (int i = 4; i >= 0; --i) 
    {
        thresholds[i] = 41 + i * interval_width;
    }
    return thresholds;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
   
    // Apply the same order to the names vector
    std::vector<std::string> sorted_names(student_names.size());
    for(int i = 0; i < student_scores.size(); ++i)
    {        
        const std::string rank = std::to_string(i+1) + ". ";
        std::string scoreString = std::to_string(student_scores[i]);
        sorted_names[i] = rank + student_names[i] + ": " + scoreString;
    }
    return sorted_names;
}

// Create a string that contains the name of the first student to make a perfect score on the exam.
std::string perfect_score(std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    std::string bestStudent;
    for(int i = 0; i< student_scores.size();++i)
    {
        if(student_scores[i] == 100){
            return  student_names[i];
        }
    }
 return "";
}